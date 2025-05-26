/****************************************************************************
** Meta object code from reading C++ file 'viewer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/viewer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_viewer_t {
    uint offsetsAndSizes[108];
    char stringdata0[7];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[25];
    char stringdata5[25];
    char stringdata6[25];
    char stringdata7[23];
    char stringdata8[23];
    char stringdata9[23];
    char stringdata10[17];
    char stringdata11[13];
    char stringdata12[24];
    char stringdata13[23];
    char stringdata14[22];
    char stringdata15[24];
    char stringdata16[5];
    char stringdata17[24];
    char stringdata18[24];
    char stringdata19[27];
    char stringdata20[25];
    char stringdata21[25];
    char stringdata22[25];
    char stringdata23[22];
    char stringdata24[24];
    char stringdata25[23];
    char stringdata26[25];
    char stringdata27[8];
    char stringdata28[25];
    char stringdata29[21];
    char stringdata30[27];
    char stringdata31[23];
    char stringdata32[24];
    char stringdata33[20];
    char stringdata34[31];
    char stringdata35[21];
    char stringdata36[26];
    char stringdata37[19];
    char stringdata38[20];
    char stringdata39[13];
    char stringdata40[13];
    char stringdata41[17];
    char stringdata42[22];
    char stringdata43[20];
    char stringdata44[15];
    char stringdata45[10];
    char stringdata46[12];
    char stringdata47[10];
    char stringdata48[15];
    char stringdata49[13];
    char stringdata50[6];
    char stringdata51[14];
    char stringdata52[15];
    char stringdata53[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_viewer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_viewer_t qt_meta_stringdata_viewer = {
    {
        QT_MOC_LITERAL(0, 6),  // "viewer"
        QT_MOC_LITERAL(7, 20),  // "on_Zoom_valueChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 8),  // "position"
        QT_MOC_LITERAL(38, 24),  // "on_X_rotate_valueChanged"
        QT_MOC_LITERAL(63, 24),  // "on_Y_rotate_valueChanged"
        QT_MOC_LITERAL(88, 24),  // "on_Z_rotate_valueChanged"
        QT_MOC_LITERAL(113, 22),  // "on_X_move_valueChanged"
        QT_MOC_LITERAL(136, 22),  // "on_Y_move_valueChanged"
        QT_MOC_LITERAL(159, 22),  // "on_Z_move_valueChanged"
        QT_MOC_LITERAL(182, 16),  // "on_reset_clicked"
        QT_MOC_LITERAL(199, 12),  // "updateVertex"
        QT_MOC_LITERAL(212, 23),  // "on_reset_rotate_clicked"
        QT_MOC_LITERAL(236, 22),  // "on_reset_scale_clicked"
        QT_MOC_LITERAL(259, 21),  // "on_reset_move_clicked"
        QT_MOC_LITERAL(281, 23),  // "on_edit_xr_valueChanged"
        QT_MOC_LITERAL(305, 4),  // "arg1"
        QT_MOC_LITERAL(310, 23),  // "on_edit_yr_valueChanged"
        QT_MOC_LITERAL(334, 23),  // "on_edit_zr_valueChanged"
        QT_MOC_LITERAL(358, 26),  // "on_edit_scale_valueChanged"
        QT_MOC_LITERAL(385, 24),  // "on_edit_xtr_valueChanged"
        QT_MOC_LITERAL(410, 24),  // "on_edit_ytr_valueChanged"
        QT_MOC_LITERAL(435, 24),  // "on_edit_ztr_valueChanged"
        QT_MOC_LITERAL(460, 21),  // "on_back_color_clicked"
        QT_MOC_LITERAL(482, 23),  // "on_vertex_color_clicked"
        QT_MOC_LITERAL(506, 22),  // "on_lines_color_clicked"
        QT_MOC_LITERAL(529, 24),  // "on_square_points_toggled"
        QT_MOC_LITERAL(554, 7),  // "checked"
        QT_MOC_LITERAL(562, 24),  // "on_circle_points_toggled"
        QT_MOC_LITERAL(587, 20),  // "on_no_points_toggled"
        QT_MOC_LITERAL(608, 26),  // "on_point_size_valueChanged"
        QT_MOC_LITERAL(635, 22),  // "on_dotted_line_toggled"
        QT_MOC_LITERAL(658, 23),  // "on_default_line_toggled"
        QT_MOC_LITERAL(682, 19),  // "on_no_lines_clicked"
        QT_MOC_LITERAL(702, 30),  // "on_line_size_edit_valueChanged"
        QT_MOC_LITERAL(733, 20),  // "on_load_file_clicked"
        QT_MOC_LITERAL(754, 25),  // "on_filename_returnPressed"
        QT_MOC_LITERAL(780, 18),  // "on_central_toggled"
        QT_MOC_LITERAL(799, 19),  // "on_parallel_toggled"
        QT_MOC_LITERAL(819, 12),  // "saveSettings"
        QT_MOC_LITERAL(832, 12),  // "loadSettings"
        QT_MOC_LITERAL(845, 16),  // "setFrontSettings"
        QT_MOC_LITERAL(862, 21),  // "on_save_image_clicked"
        QT_MOC_LITERAL(884, 19),  // "on_save_gif_clicked"
        QT_MOC_LITERAL(904, 14),  // "createSnapshot"
        QT_MOC_LITERAL(919, 9),  // "createGif"
        QT_MOC_LITERAL(929, 11),  // "path_to_gif"
        QT_MOC_LITERAL(941, 9),  // "countDown"
        QT_MOC_LITERAL(951, 14),  // "slotMousePress"
        QT_MOC_LITERAL(966, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(979, 5),  // "event"
        QT_MOC_LITERAL(985, 13),  // "slotMouseMove"
        QT_MOC_LITERAL(999, 14),  // "slotMouseWheel"
        QT_MOC_LITERAL(1014, 12)   // "QWheelEvent*"
    },
    "viewer",
    "on_Zoom_valueChanged",
    "",
    "position",
    "on_X_rotate_valueChanged",
    "on_Y_rotate_valueChanged",
    "on_Z_rotate_valueChanged",
    "on_X_move_valueChanged",
    "on_Y_move_valueChanged",
    "on_Z_move_valueChanged",
    "on_reset_clicked",
    "updateVertex",
    "on_reset_rotate_clicked",
    "on_reset_scale_clicked",
    "on_reset_move_clicked",
    "on_edit_xr_valueChanged",
    "arg1",
    "on_edit_yr_valueChanged",
    "on_edit_zr_valueChanged",
    "on_edit_scale_valueChanged",
    "on_edit_xtr_valueChanged",
    "on_edit_ytr_valueChanged",
    "on_edit_ztr_valueChanged",
    "on_back_color_clicked",
    "on_vertex_color_clicked",
    "on_lines_color_clicked",
    "on_square_points_toggled",
    "checked",
    "on_circle_points_toggled",
    "on_no_points_toggled",
    "on_point_size_valueChanged",
    "on_dotted_line_toggled",
    "on_default_line_toggled",
    "on_no_lines_clicked",
    "on_line_size_edit_valueChanged",
    "on_load_file_clicked",
    "on_filename_returnPressed",
    "on_central_toggled",
    "on_parallel_toggled",
    "saveSettings",
    "loadSettings",
    "setFrontSettings",
    "on_save_image_clicked",
    "on_save_gif_clicked",
    "createSnapshot",
    "createGif",
    "path_to_gif",
    "countDown",
    "slotMousePress",
    "QMouseEvent*",
    "event",
    "slotMouseMove",
    "slotMouseWheel",
    "QWheelEvent*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_viewer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  284,    2, 0x08,    1 /* Private */,
       4,    1,  287,    2, 0x08,    3 /* Private */,
       5,    1,  290,    2, 0x08,    5 /* Private */,
       6,    1,  293,    2, 0x08,    7 /* Private */,
       7,    1,  296,    2, 0x08,    9 /* Private */,
       8,    1,  299,    2, 0x08,   11 /* Private */,
       9,    1,  302,    2, 0x08,   13 /* Private */,
      10,    0,  305,    2, 0x08,   15 /* Private */,
      11,    0,  306,    2, 0x08,   16 /* Private */,
      12,    0,  307,    2, 0x08,   17 /* Private */,
      13,    0,  308,    2, 0x08,   18 /* Private */,
      14,    0,  309,    2, 0x08,   19 /* Private */,
      15,    1,  310,    2, 0x08,   20 /* Private */,
      17,    1,  313,    2, 0x08,   22 /* Private */,
      18,    1,  316,    2, 0x08,   24 /* Private */,
      19,    1,  319,    2, 0x08,   26 /* Private */,
      20,    1,  322,    2, 0x08,   28 /* Private */,
      21,    1,  325,    2, 0x08,   30 /* Private */,
      22,    1,  328,    2, 0x08,   32 /* Private */,
      23,    0,  331,    2, 0x08,   34 /* Private */,
      24,    0,  332,    2, 0x08,   35 /* Private */,
      25,    0,  333,    2, 0x08,   36 /* Private */,
      26,    1,  334,    2, 0x08,   37 /* Private */,
      28,    1,  337,    2, 0x08,   39 /* Private */,
      29,    1,  340,    2, 0x08,   41 /* Private */,
      30,    1,  343,    2, 0x08,   43 /* Private */,
      31,    1,  346,    2, 0x08,   45 /* Private */,
      32,    1,  349,    2, 0x08,   47 /* Private */,
      33,    0,  352,    2, 0x08,   49 /* Private */,
      34,    1,  353,    2, 0x08,   50 /* Private */,
      35,    0,  356,    2, 0x08,   52 /* Private */,
      36,    0,  357,    2, 0x08,   53 /* Private */,
      37,    1,  358,    2, 0x08,   54 /* Private */,
      38,    1,  361,    2, 0x08,   56 /* Private */,
      39,    0,  364,    2, 0x08,   58 /* Private */,
      40,    0,  365,    2, 0x08,   59 /* Private */,
      41,    0,  366,    2, 0x08,   60 /* Private */,
      42,    0,  367,    2, 0x08,   61 /* Private */,
      43,    0,  368,    2, 0x08,   62 /* Private */,
      44,    0,  369,    2, 0x08,   63 /* Private */,
      45,    1,  370,    2, 0x08,   64 /* Private */,
      47,    0,  373,    2, 0x08,   66 /* Private */,
      48,    1,  374,    2, 0x0a,   67 /* Public */,
      51,    1,  377,    2, 0x0a,   69 /* Public */,
      52,    1,  380,    2, 0x0a,   71 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, 0x80000000 | 53,   50,

       0        // eod
};

Q_CONSTINIT const QMetaObject viewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_viewer.offsetsAndSizes,
    qt_meta_data_viewer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_viewer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<viewer, std::true_type>,
        // method 'on_Zoom_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_X_rotate_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Y_rotate_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Z_rotate_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_X_move_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Y_move_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Z_move_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_reset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateVertex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_rotate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_scale_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_move_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit_xr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_yr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_zr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_scale_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_xtr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_ytr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_edit_ztr_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_back_color_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_vertex_color_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lines_color_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_square_points_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_circle_points_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_no_points_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_point_size_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_dotted_line_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_default_line_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_no_lines_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_line_size_edit_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_load_file_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_filename_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_central_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_parallel_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'saveSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFrontSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_image_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_gif_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createSnapshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGif'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'countDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotMousePress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'slotMouseMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'slotMouseWheel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>
    >,
    nullptr
} };

void viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<viewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Zoom_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_X_rotate_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_Y_rotate_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_Z_rotate_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_X_move_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_Y_move_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_Z_move_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_reset_clicked(); break;
        case 8: _t->updateVertex(); break;
        case 9: _t->on_reset_rotate_clicked(); break;
        case 10: _t->on_reset_scale_clicked(); break;
        case 11: _t->on_reset_move_clicked(); break;
        case 12: _t->on_edit_xr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_edit_yr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_edit_zr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_edit_scale_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_edit_xtr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_edit_ytr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_edit_ztr_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_back_color_clicked(); break;
        case 20: _t->on_vertex_color_clicked(); break;
        case 21: _t->on_lines_color_clicked(); break;
        case 22: _t->on_square_points_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->on_circle_points_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->on_no_points_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_point_size_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_dotted_line_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_default_line_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->on_no_lines_clicked(); break;
        case 29: _t->on_line_size_edit_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_load_file_clicked(); break;
        case 31: _t->on_filename_returnPressed(); break;
        case 32: _t->on_central_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->on_parallel_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->saveSettings(); break;
        case 35: _t->loadSettings(); break;
        case 36: _t->setFrontSettings(); break;
        case 37: _t->on_save_image_clicked(); break;
        case 38: _t->on_save_gif_clicked(); break;
        case 39: _t->createSnapshot(); break;
        case 40: _t->createGif((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->countDown(); break;
        case 42: _t->slotMousePress((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 43: _t->slotMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 44: _t->slotMouseWheel((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_viewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
