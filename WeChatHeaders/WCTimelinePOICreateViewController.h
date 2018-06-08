//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ICreatePOIMgrExt.h"
#import "ILocationMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "POICategoryDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCAddressLogicMgrExt.h"
#import "WCBaseInfoItemDelegate.h"

@class CLLocation, MMTableViewInfo, MMUIButton, NSMutableArray, NSString, WCBaseTextFieldItem, WCPOIAddressPickerItem;

@interface WCTimelinePOICreateViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, ICreatePOIMgrExt, POICategoryDelegate, WCAddressLogicMgrExt, ILocationMgrExt, UIAlertViewDelegate>
{
    NSString *_poiName;
    CLLocation *_location;
    id <POICreateDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    NSMutableArray *_infoItems;
    WCBaseTextFieldItem *_poiNameTextFieldItem;
    WCPOIAddressPickerItem *_districtPickerItem;
    WCBaseTextFieldItem *_addressTextFieldItem;
    WCBaseTextFieldItem *_categoryPickerItem;
    WCBaseTextFieldItem *_telephoneTextFieldItem;
    MMUIButton *_seeMoreButton;
    unsigned long _geoTag;
    BOOL _lockSelection;
    BOOL _isLiteView;
    unsigned int _createPOICellIndex;
    NSString *_currentSearchID;
}

@property(retain, nonatomic) NSString *currentSearchID; // @synthesize currentSearchID=_currentSearchID;
@property(nonatomic) unsigned int createPOICellIndex; // @synthesize createPOICellIndex=_createPOICellIndex;
- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onSelectedCategory:(id)arg1;
- (void)OnCreatePOI:(id)arg1 ID:(id)arg2 Error:(int)arg3;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)validateData;
- (void)onDone;
- (void)onReturn;
- (void)onSeeMore;
- (void)hideKeyboard;
- (void)selectAddress:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)initDistrict;
- (void)initOptionalData;
- (void)initRequiredData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPOIName:(id)arg1 Location:(id)arg2 Delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

