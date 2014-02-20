/****************************************************************************
** Meta object code from reading C++ file 'ListTest.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ListTest.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListTest.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ListTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       2,  299, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      33,    9,    9,    9, 0x05,
      55,    9,    9,    9, 0x05,
      73,    9,    9,    9, 0x05,
      85,    9,    9,    9, 0x05,
     101,    9,    9,    9, 0x05,
     120,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     142,    9,    9,    9, 0x0a,
     154,    9,    9,    9, 0x0a,

 // methods: signature, parameters, type, tag, flags
     241,  178,    9,    9, 0x02,
     363,  295,    9,    9, 0x02,
     442,  426,    9,    9, 0x02,
     523,  470,    9,    9, 0x02,
     614,  571,    9,    9, 0x22,
     712,  657,    9,    9, 0x02,
     767,  657,    9,    9, 0x02,
     835,  819,    9,    9, 0x02,
     876,  856,    9,    9, 0x02,
     909,  856,    9,    9, 0x02,
     945,    9,    9,    9, 0x02,
     955,    9,    9,    9, 0x02,
     973,    9,    9,    9, 0x02,
     995,    9,    9,    9, 0x02,
    1015,  856,    9,    9, 0x02,
    1068, 1054,    9,    9, 0x02,
    1092,    9,    9,    9, 0x02,
    1113, 1104,    9,    9, 0x02,
    1138,    9,    9,    9, 0x02,
    1155,    9,    9,    9, 0x02,
    1177, 1172,    9,    9, 0x02,
    1194,    9,    9,    9, 0x02,
    1211,    9,    9,    9, 0x02,
    1247, 1228,    9,    9, 0x02,
    1307, 1282,    9,    9, 0x02,
    1345, 1334,    9,    9, 0x02,
    1376, 1364,    9,    9, 0x02,
    1422,    9,    9,    9, 0x02,
    1444,    9,    9,    9, 0x02,
    1460,    9,    9,    9, 0x02,
    1473,    9,    9,    9, 0x02,
    1485,    9,    9,    9, 0x02,
    1509,    9,    9,    9, 0x02,
    1534, 1521,    9,    9, 0x02,
    1568,    9, 1563,    9, 0x02,
    1587, 1583, 1563,    9, 0x02,
    1606,    9, 1563,    9, 0x02,
    1615,    9, 1563,    9, 0x02,
    1641,    9, 1633,    9, 0x02,
    1676, 1658, 1633,    9, 0x02,
    1702,    9, 1633,    9, 0x22,
    1721, 1658, 1633,    9, 0x02,
    1744,    9, 1633,    9, 0x22,
    1760, 1658, 1633,    9, 0x02,
    1783,    9, 1633,    9, 0x22,
    1815, 1799, 1633,    9, 0x02,
    1858, 1848, 1633,    9, 0x02,
    1901,    9, 1888,    9, 0x02,

 // properties: name, type, flags
    1917, 1633, 0x0a095001,
    1928, 1633, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_ListTest[] = {
    "ListTest\0\0periodChanged(QString)\0"
    "updateGraph(QVariant)\0setAccountGraph()\0"
    "reloadWeb()\0clearGraphVar()\0"
    "emptyExpenseList()\0notEmptyExpenseList()\0"
    "checkDate()\0overBudgetDialogClose()\0"
    "expenseName,expenseAmount,expenseDate,expenseCategory,fullDate\0"
    "addNewRecord(QString,QString,QString,QString,QString)\0"
    "selectedIndex,expenseAmount,expenseName,expenseDate,expenseCategory\0"
    "updateSelectedRecord(QVariant,QString,QString,QString,QString)\0"
    "selectedExpense\0deleteItemAtIndex(QVariant)\0"
    "expenseAmount,budgetType,startDate,endDate,firstTime\0"
    "setBudget(QString,QString,QString,QString,bool)\0"
    "expenseAmount,budgetType,startDate,endDate\0"
    "setBudget(QString,QString,QString,QString)\0"
    "accountName,expenseAmount,budgetType,startDate,endDate\0"
    "createAccount(QString,QString,QString,QString,QString)\0"
    "addAccount(QString,QString,QString,QString,QString)\0"
    "selectedAccount\0setAccount(QVariant)\0"
    "keyPressed,fromPage\0"
    "updateSumAmount(QString,QString)\0"
    "updatePinSumAmount(QString,QString)\0"
    "onStart()\0clearAmountText()\0"
    "clearEditAmountText()\0clearBudgetAmount()\0"
    "updateSumAmountSymbol(QString,QString)\0"
    "currentAmount\0editAmountText(QString)\0"
    "createPin()\0fromPage\0deletePinAmount(QString)\0"
    "getCreateLabel()\0getVerifyLabel()\0"
    "lock\0lockApp(QString)\0fillBudgetPage()\0"
    "fillAddAccount()\0previousID,newName\0"
    "changeAccountName(QString,QString)\0"
    "previousID,selectedIndex\0"
    "deleteAccount(QString,int)\0endDateStr\0"
    "newPeriod(QString)\0date1,date2\0"
    "updatePeriodExpensesListView(QString,QString)\0"
    "loadAccountCreation()\0reloadWebView()\0"
    "clearGraph()\0sendEmail()\0"
    "setUpAccountListModel()\0updateBar()\0"
    "excessPeriod\0removeExcessPeriod(QVariant)\0"
    "bool\0loadQMLScene()\0pin\0verifyPin(QString)\0"
    "hasPin()\0getLockedStatus()\0QString\0"
    "getAccountName()\0selectedAccountID\0"
    "getCurrentBudget(QString)\0getCurrentBudget()\0"
    "getUsedBudget(QString)\0getUsedBudget()\0"
    "getBudgetType(QString)\0getBudgetType()\0"
    "fullValue,digit\0addDigitToValue(QString,QString)\0"
    "fullValue\0deleteDigitFromValue(QString)\0"
    "QVariantList\0getValueArray()\0budgetType\0"
    "budgetStartDate\0"
};

void ListTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListTest *_t = static_cast<ListTest *>(_o);
        switch (_id) {
        case 0: _t->periodChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateGraph((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->setAccountGraph(); break;
        case 3: _t->reloadWeb(); break;
        case 4: _t->clearGraphVar(); break;
        case 5: _t->emptyExpenseList(); break;
        case 6: _t->notEmptyExpenseList(); break;
        case 7: _t->checkDate(); break;
        case 8: _t->overBudgetDialogClose(); break;
        case 9: _t->addNewRecord((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 10: _t->updateSelectedRecord((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 11: _t->deleteItemAtIndex((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: _t->setBudget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 13: _t->setBudget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 14: _t->createAccount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 15: _t->addAccount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 16: _t->setAccount((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 17: _t->updateSumAmount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->updatePinSumAmount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->onStart(); break;
        case 20: _t->clearAmountText(); break;
        case 21: _t->clearEditAmountText(); break;
        case 22: _t->clearBudgetAmount(); break;
        case 23: _t->updateSumAmountSymbol((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->editAmountText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->createPin(); break;
        case 26: _t->deletePinAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->getCreateLabel(); break;
        case 28: _t->getVerifyLabel(); break;
        case 29: _t->lockApp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->fillBudgetPage(); break;
        case 31: _t->fillAddAccount(); break;
        case 32: _t->changeAccountName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->deleteAccount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->newPeriod((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->updatePeriodExpensesListView((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->loadAccountCreation(); break;
        case 37: _t->reloadWebView(); break;
        case 38: _t->clearGraph(); break;
        case 39: _t->sendEmail(); break;
        case 40: _t->setUpAccountListModel(); break;
        case 41: _t->updateBar(); break;
        case 42: _t->removeExcessPeriod((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 43: { bool _r = _t->loadQMLScene();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->verifyPin((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->hasPin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->getLockedStatus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { QString _r = _t->getAccountName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 48: { QString _r = _t->getCurrentBudget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QString _r = _t->getCurrentBudget();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->getUsedBudget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QString _r = _t->getUsedBudget();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 52: { QString _r = _t->getBudgetType((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->getBudgetType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->addDigitToValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 55: { QString _r = _t->deleteDigitFromValue((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 56: { QVariantList _r = _t->getValueArray();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ListTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ListTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ListTest,
      qt_meta_data_ListTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ListTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ListTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ListTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListTest))
        return static_cast<void*>(const_cast< ListTest*>(this));
    return QObject::qt_metacast(_clname);
}

int ListTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = budgetType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = budgetStartDate(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ListTest::periodChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ListTest::updateGraph(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ListTest::setAccountGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ListTest::reloadWeb()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ListTest::clearGraphVar()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ListTest::emptyExpenseList()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ListTest::notEmptyExpenseList()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
