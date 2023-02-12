from django.contrib import admin

from home.models import Curso, Aluno


@admin.register(Curso)
class detCurso(admin.ModelAdmin):
    list_display = ('id',)


@admin.register(Aluno)
class detAluno(admin.ModelAdmin):
    list_display = ('id',)
