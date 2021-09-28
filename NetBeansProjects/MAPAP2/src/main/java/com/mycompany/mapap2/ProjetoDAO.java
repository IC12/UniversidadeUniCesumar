package com.mycompany.mapap2;
 
import java.util.List;
 
public interface ProjetoDAO {
 
    void adicionar(Projeto projeto);
    List<Projeto> listar();
    Projeto consultarPorNome(String nome) throws DadoConsultadoException;
    Projeto alterar(String nome, Projeto projeto) throws DadoConsultadoException;
    void excluir(Projeto projeto) throws DadoConsultadoException, UnsupportedOperationException;
    void excluir(String nome) throws DadoConsultadoException, UnsupportedOperationException;

}
