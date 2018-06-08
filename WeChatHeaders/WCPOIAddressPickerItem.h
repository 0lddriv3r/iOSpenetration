//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView, WCAddressStageDataStruct;

@interface WCPOIAddressPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate>
{
    NSArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    int m_uiCurProvince;
    int m_uiCurCity;
    int m_uiCurDistrict;
    UIPickerView *m_pickerView;
    BOOL m_bLockProvince;
    BOOL m_bLockCity;
    BOOL m_bLockDistrict;
    BOOL m_bLockProviceAndCity;
}

@property(nonatomic) BOOL lockProviceAndCity; // @synthesize lockProviceAndCity=m_bLockProviceAndCity;
- (void).cxx_destruct;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)SetText;
- (void)becomeFirstResponder;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;
- (void)resetSelectedAddress;
- (id)getSelectDistrict;
- (id)getSelectCity;
- (id)getSelectProvice;
- (BOOL)selectCityInDistrict:(id)arg1;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (void)setAllAddressStageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
