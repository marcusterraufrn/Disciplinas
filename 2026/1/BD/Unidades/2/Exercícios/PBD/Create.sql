-- 1. Tabela CLIENTE
CREATE TABLE cliente (
  cpf_cliente TEXT PRIMARY KEY,
  nome_cliente TEXT NOT NULL,
  cidade_cliente TEXT NOT NULL
);

-- 2. Tabela PRODUTO
CREATE TABLE produto (
  id_produto SERIAL PRIMARY KEY,
  nome_produto TEXT NOT NULL,
  categoria TEXT NOT NULL
);

-- 3. Tabela VENDA
CREATE TABLE venda (
  id_venda SERIAL PRIMARY KEY,
  data_venda DATE NOT NULL,
  cpf_cliente TEXT NOT NULL
    REFERENCES cliente(cpf_cliente)
);

-- 4. Tabela ITEM_VENDA
CREATE TABLE item_venda (
  id_venda INT REFERENCES venda(id_venda),
  id_produto INT REFERENCES produto(id_produto),
  quantidade INT NOT NULL CHECK (quantidade > 0),
  preco_unit NUMERIC(10,2) NOT NULL,
  PRIMARY KEY (id_venda, id_produto)
);
