#ifndef INPUTVENUEMESSAGECONTENT_H
#define INPUTVENUEMESSAGECONTENT_H

#include <QVariant>
#include <QString>

#include "InputMessageContent"

namespace Telegram
{
    class TARNABOTSHARED_EXPORT InputVenueMessageContent : public InputMessageContent
    {
    public:
        InputVenueMessageContent();
        InputVenueMessageContent(QJsonObject jsonObject);
        InputVenueMessageContent(QString title, QString address,
                                 double longitude, double latitude);
        
        //Getters/Setters
        double getLatitude() const;
        void setLatitude(double value);
        
        double getLongitude() const;
        void setLongitude(double value);
        
        QString getTitle() const;
        void setTitle(const QString &value);
        
        QString getAddress() const;
        void setAddress(const QString &value);
        
        QString getFoursquareId() const;
        void setFoursquareId(const QString &value);

        QString getFoursquareType() const;
        void setFoursquareType(const QString& value);
        
        //Flag getters
        bool hasLatitude() const;
        
        bool hasLongitude() const;
        
        bool hasTitle() const;
        
        bool hasAddress() const;
        
        bool hasFoursquareId() const;
        bool hasFoursquareType() const;
    };
}
#endif // INPUTVENUEMESSAGECONTENT_H
