-- Consulta: Todos os cliente
SELECT
  c.nome_cliente
FROM cliente c;

-- Consulta: Todos os produtos da categoria informática
SELECT
  p.nome_produto
FROM produto p
WHERE categoria = 'Informática';

-- Consulta: total por cliente
SELECT
  c.nome_cliente,
  SUM(i.quantidade * i.preco_unit) AS total
FROM venda v
JOIN cliente c USING (cpf_cliente)
JOIN item_venda i USING (id_venda)
GROUP BY c.nome_cliente
ORDER BY total DESC;
