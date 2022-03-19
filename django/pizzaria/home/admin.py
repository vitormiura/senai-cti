from django.contrib import admin

from home.models import Produto, Categoria


class detCategoria(admin.ModelAdmin):
        list_display = ('id', 'nome')


class detProduto(admin.ModelAdmin):
        list_display = ('id', 'nome', 'categoria', 'preco', 'quantidade', 'foto')
        list_editable = ('categoria',)
        list_display_links = ('nome',)
        search_fields = ('nome',)


admin.site.register(Produto, detProduto)

admin.site.register(Categoria, detCategoria)
