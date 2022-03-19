from django.db import models


class Categoria(models.Model):
    nome = models.CharField(max_length=30, default='')

    def __str__(self):
        return self.nome


class Produto(models.Model):
    categoria = models.ForeignKey(Categoria, on_delete=models.DO_NOTHING)
    nome = models.CharField(max_length=30, default='')
    preco = models.DecimalField(max_digits=10, decimal_places=2)
    quantidade = models.IntegerField()
    tamanho = models.CharField(max_length=30, default='')
    foto = models.ImageField(upload_to='foto_produtos/%y/%m/%d/', blank=True)

    def __str__(self):
        return self.nome

