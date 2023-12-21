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

    QByteArray getImage() const { return image; }
    void setImage(const QByteArray &newImage) { image = newImage; }

    QString getName() const { return name; }
    void setName(const QString &newName) { name = newName; }

    float getPrice() const { return price; }
    void setPrice(float newPrice) { price = newPrice; }




};

#endif // SKETCH_H
