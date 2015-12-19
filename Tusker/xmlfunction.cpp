#include "xmlfunction.h"
#include <QtXML>

XmlFunction::XmlFunction()
{


}

void XmlFunction::createFile()
{
    // Create a document to write XML
    QDomDocument document;

    // Making the root element
    QDomElement root = document.createElement("Dorms");

    // Adding the root element to the docuemnt
    document.appendChild(root);

}

void XmlFunction::childElement()
{
    for(int i = 0; i < 5; i++)
    {
        QDomElement dorm = document.createElement("Dorm");
        dorm.setAttribute("Name", "Dorm Building " + QString::number(i));
        dorm.setAttribute("ID", QString::number(i));
        root.appendChild(dorm);

        // Adding rooms to each dorm building
        for(int j = 0; j < 3; j++)
        {
            QDomElement room = document.createElement("Room");
            room.setAttribute("Name", "Room " + QString::number(j));
            room.setAttribute("ID", QString::number(j));
            dorm.appendChild(room);
        }
    }
}

void XmlFunction::writeToFile()
{
    // Writing to a file
    QFile file("myXLM.xml");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Open the file for writing failed";
    }
    else
    {
        QTextStream stream(&file);
        stream << document.toString();
        file.close();
        qDebug() << "Writing is done";
    }
}


