-- Inserindo clientes
INSERT INTO cliente VALUES
  ('111.111.111-11', 'Ana Lima', 'Natal'),
  ('222.222.222-22', 'João Melo', 'Recife'),
  ('333.333.333-33', 'Maria Santos', 'Fortaleza');

-- Inserindo produtos
INSERT INTO produto (nome_produto, categoria) VALUES
  ('Notebook Dell', 'Informática'),
  ('Mouse Logitech', 'Periféricos'),
  ('Teclado Mecânico', 'Periféricos'),
  ('Monitor 24"', 'Informática');

-- Inserindo vendas
INSERT INTO venda (data_venda, cpf_cliente) VALUES
  ('2026-04-01', '111.111.111-11'),
  ('2026-04-05', '222.222.222-22'),
  ('2026-04-10', '111.111.111-11');

-- Inserindo itens de venda
INSERT INTO item_venda VALUES
  (1, 1, 1, 3500.00),
  (1, 2, 2,  150.00),
  (2, 1, 1, 3500.00),
  (3, 3, 1,  350.00),
  (3, 4, 2, 1200.00);
