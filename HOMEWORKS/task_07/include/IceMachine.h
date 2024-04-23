#ifndef ICEMACHINE_H
#define ICEMACHINE_H

class IceMachine {
public:
    IceMachine();
    void SetID(int id);
    void SetState(bool state);
    void SetCapacity(double capacity);
    void SetConsumption(double consumption);
    void SetPowder(double powder);
    double GetCapacity() const;
    double GetPowder() const;
    void Presentation() const;
    void Make(int portions);
    void Start();
    void Stop();
    void Reload(double amount);

private:
    int ID;
    bool state;
    double capacity;
    double consumption;
    double powder;
};

#endif
