class Foco
{
private:
    bool estadoActual;
public:
    Foco() {}
    void Encender()
    {
        estadoActual = true;
    }
    void Apagar()
    {
        estadoActual = false;
    }
    bool LeerEstado()
    {
        return estadoActual;
    }
};
