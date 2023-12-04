#ifndef TESTCONTROLLER_H
#define TESTCONTROLLER_H

#include <QObject>
#include "aedcontroller.h"
#include "PatientType.h"

class AEDController;

class TestController: public QObject{
    Q_OBJECT


public slots:
    void togglePadPatient();
    void togglePadAED();
signals:
    void updateHeartRateImage(vector<double>&);
    void sliderUpdate();


public:
    TestController(QObject* parent = nullptr);

    void setController(AEDController* controller);

    void setPatientHR(double heartRate);

    void updateHeartRate(int);

    void placePads(const PatientType& type);

    void updateSlider();
    int getCurrentHeartRate();
    virtual ~TestController();





private:
    AEDController* controlSystem;
};

#endif // TESTCONTROLLER_H
