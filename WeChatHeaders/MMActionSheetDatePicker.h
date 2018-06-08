//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSDate, NSString, UIBarButtonItem, UIView, UIView<MMActionSheetCustomPickerPotocol>;

@interface MMActionSheetDatePicker : MMUIView
{
    id <MMActionSheetDatePickerDelegate> _delegate;
    UIView<MMActionSheetCustomPickerPotocol> *_customDatePickerView;
    unsigned int _datePickerViewType;
    int _datePickerMode;
    NSString *_title;
    NSString *_desp;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    UIView *_transparentView;
    NSDate *_selectedDate;
    UIView *_contentView;
    UIView *_titleView;
    UIView *_datePicker;
    UIView *_pickerToolBar;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_titleBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *titleBarButtonItem; // @synthesize titleBarButtonItem=_titleBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(retain, nonatomic) UIView *pickerToolBar; // @synthesize pickerToolBar=_pickerToolBar;
@property(retain, nonatomic) UIView *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy, nonatomic) NSString *desp; // @synthesize desp=_desp;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(nonatomic) unsigned int datePickerViewType; // @synthesize datePickerViewType=_datePickerViewType;
@property(retain, nonatomic) UIView<MMActionSheetCustomPickerPotocol> *customDatePickerView; // @synthesize customDatePickerView=_customDatePickerView;
@property(nonatomic) __weak id <MMActionSheetDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genNewBigButton;
- (void)handleTap:(id)arg1;
- (void)eventForDatePicker:(id)arg1;
- (void)onConfirm;
- (void)onCancel;
- (void)dismiss;
- (void)dismissActionSheetDatePicker;
- (void)showInView:(id)arg1;
- (id)init;

@end

