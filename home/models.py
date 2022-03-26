from django.db import models


class Aluno(models.Model):
    curso = models.Charfield(max_length=30)
    descricao = models.Charfield(max_length=100)
    status = models.Charfield(
        max_length=100,
        choices=(
            ('A', 'Ativo'),
            ('B', 'Bloqueado'),
            ('C', 'Cancelado'),
        )
    )

    def __str__(self):
        return self.nome


class Curso(models.Model):
    curso = models.Charfield(max_length=30)
    descricao = models.Charfield(max_length=100)
    status = models.Charfield(
        max_length=100,
        choices=(
            ('A', 'Ativo'),
            ('I', 'Inativo'),
        )
    )

    def __str__(self):
        return self.Curso
