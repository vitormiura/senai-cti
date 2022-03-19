from django.shortcuts import render, redirect

from home.models import Categoria, Produto


def index(request):
    sql = Produto.objects.all()
    return render(request, 'home/index.html', {'dados': sql})

def detalhe_produto(request, idpro):
    # sql = 'select + from produto where id = ${idpro}' //Fazer direto
    sql = Produto.objects.get(id=idpro)
    contexto = {
        'detproduto' : sql
    }
    return render(request, 'home/det_produtos.html',contexto)

def cad_produto(request):
    sql = Categoria.objects.all()

    if str(request.method) != "POST":
        return render(request, 'home/form_produto.html',{'dados_categoria':sql})

    nome_ = request.POST.get('nome')
    preco_ = request.POST.get('preco')
    quantidade_ = request.POST.get('quantidade')
    tamanho_ = request.POST.get('tamanho')
    categoria_ = request.POST.get('categoria')
    foto_ = request.FILES.get('foto')

    dados = Produto.objects.create(
    
        nome=nome_,
        preco=preco_,
        quantidade=quantidade_,
        tamanho=tamanho_,
        categoria_id=categoria_,
        foto=foto_,

    )

    dados.save()
    return redirect('home')
