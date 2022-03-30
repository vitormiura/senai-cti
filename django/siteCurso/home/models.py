from django.db import models


class Professor(models.Model):
    nome = models.CharField(max_length=40)
    cpf = models.CharField(max_length=15)
    opcao = models.CharField( max_length=10, default='A',
                              choices=(('A','Ativo'),
                                       ('B','Bloqueado'),
                                       ('C','Cancelado'))
                              )
    def __str__(self):
        return self.nome

class Curso(models.Model):
    titulo = models.CharField(max_length=30)
    descricao = models.CharField(max_length=50)
    datainicio = models.DateTimeField(auto_now_add=True)
    mostrar = models.BooleanField(default=True)
    professor = models.ForeignKey(Professor,on_delete=models.DO_NOTHING)
    foto = models.ImageField(blank=True,upload_to='fotos/%y/%m/%d/')

    def __str__(self):
        return self.titulo