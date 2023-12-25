#ifndef SKETCH_H
#define SKETCH_H
#include <QByteArray>
#include <QString>
class Sketch
{
private:
    QByteArray image;
    QString name;
    float price;
public:
    Sketch():image(),name("\0"),price(0.0){}
    Sketch(QByteArray image,QString name,float price):image(image), name(name),price(price){}
    Sketch(Sketch &sketch);
    ~Sketch(){}

    QByteArray getImage()  { return image; }
    void setImage( QByteArray &newImage) { image = newImage; }

    QString getName()  { return name; }
    void setName( QString &newName) { name = newName; }

    float getPrice()  { return price; }
    void setPrice(float newPrice) { price = newPrice; }




};

#endif // SKETCH_H
