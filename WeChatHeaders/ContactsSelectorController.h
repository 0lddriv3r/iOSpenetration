//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MultiSelectContactsViewControllerDelegate.h"
#import "WCContactItemDeleteViewDelegate.h"
#import "WCEditMemberPannelDataSource.h"
#import "WCEditMemberPannelDelegate.h"
#import "WCSelectorViewDataSource.h"
#import "WCSelectorViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UINavigationController, WCEditMemberPannel, WCSelectorView;

@interface ContactsSelectorController : MMObject <MultiSelectContactsViewControllerDelegate, WCSelectorViewDelegate, WCSelectorViewDataSource, WCEditMemberPannelDelegate, WCEditMemberPannelDataSource, WCContactItemDeleteViewDelegate>
{
    NSMutableArray *_arrFilteredContacts;
    NSMutableArray *_arrContacts;
    WCSelectorView *_selectorView;
    WCEditMemberPannel *_editMemberPannel;
    NSMutableDictionary *_dicContactItemDeleteView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    id <ContactsSelectorControllerDelegate> _selectDelegate;
    BOOL _hasSelectCountLimit;
    unsigned long _selectCountLimit;
}

@property(nonatomic) unsigned long selectCountLimit; // @synthesize selectCountLimit=_selectCountLimit;
@property(nonatomic) BOOL hasSelectCountLimit; // @synthesize hasSelectCountLimit=_hasSelectCountLimit;
@property(nonatomic) __weak id <ContactsSelectorControllerDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCEditMemberPannel *editMemberPannel; // @synthesize editMemberPannel=_editMemberPannel;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) NSMutableArray *arrContacts; // @synthesize arrContacts=_arrContacts;
@property(retain, nonatomic) NSMutableArray *arrFilteredContacts; // @synthesize arrFilteredContacts=_arrFilteredContacts;
- (void).cxx_destruct;
- (void)onClickDeleteButton:(id)arg1 withContact:(id)arg2;
- (void)onClickHeadImage:(id)arg1 withContact:(id)arg2;
- (id)editMemberPannel:(id)arg1 viewForItem:(unsigned int)arg2;
- (unsigned int)numberOfItems:(id)arg1;
- (void)onClickAddButton:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onClickWholeView;
- (BOOL)shouldShowDeleteView;
- (struct CGSize)sizeForViews;
- (id)viewAtIndex:(unsigned int)arg1;
- (unsigned int)numbersOfViews;
- (void)showMutiSelectContactViewController;
- (void)addContact;
- (id)init;
- (id)getViewController;
- (void)removeContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

