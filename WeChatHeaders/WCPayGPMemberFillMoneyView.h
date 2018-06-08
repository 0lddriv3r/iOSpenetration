//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "WCPayGPMemberFillMoneyCellDelegate.h"

@class CContact, MMTableView, MMUILabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UITextField, WCPayGPMemberFillMoneyCell;

@interface WCPayGPMemberFillMoneyView : MMUIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, WCPayGPMemberFillMoneyCellDelegate>
{
    BOOL _bIsSearching;
    MMTableView *_tableView;
    CContact *_chatroomContact;
    NSArray *_chatroomMemberList;
    NSMutableArray *_selectedContacts;
    NSArray *_outExistContact;
    NSMutableDictionary *_userPayAmountDict;
    unsigned long _maxSelectMember;
    WCPayGPMemberFillMoneyCell *_currentEditingCell;
    CContact *_curInvalidAmountContact;
    MMUIView *_topBarView;
    UIImageView *_searchIconImgView;
    UITextField *_searchTextField;
    NSArray *_searchResultContacts;
    MMUIView *_toolBarView;
    UIButton *_cleanUpBtn;
    MMUILabel *_totalAmountLabel;
    CDUnknownBlockType _onCancelSelectMember;
    CDUnknownBlockType _onFinishSelectMember;
    CDUnknownBlockType _onMemberSelectChange;
    CDUnknownBlockType _showParamInvalidTips;
    CDUnknownBlockType _hideParamInvalidTips;
    unsigned long long _maxPerAmount;
    unsigned long long _maxTotalAmount;
}

@property(copy, nonatomic) CDUnknownBlockType hideParamInvalidTips; // @synthesize hideParamInvalidTips=_hideParamInvalidTips;
@property(copy, nonatomic) CDUnknownBlockType showParamInvalidTips; // @synthesize showParamInvalidTips=_showParamInvalidTips;
@property(copy, nonatomic) CDUnknownBlockType onMemberSelectChange; // @synthesize onMemberSelectChange=_onMemberSelectChange;
@property(copy, nonatomic) CDUnknownBlockType onFinishSelectMember; // @synthesize onFinishSelectMember=_onFinishSelectMember;
@property(copy, nonatomic) CDUnknownBlockType onCancelSelectMember; // @synthesize onCancelSelectMember=_onCancelSelectMember;
@property(retain, nonatomic) MMUILabel *totalAmountLabel; // @synthesize totalAmountLabel=_totalAmountLabel;
@property(retain, nonatomic) UIButton *cleanUpBtn; // @synthesize cleanUpBtn=_cleanUpBtn;
@property(retain, nonatomic) MMUIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) NSArray *searchResultContacts; // @synthesize searchResultContacts=_searchResultContacts;
@property(nonatomic) BOOL bIsSearching; // @synthesize bIsSearching=_bIsSearching;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) CContact *curInvalidAmountContact; // @synthesize curInvalidAmountContact=_curInvalidAmountContact;
@property(nonatomic) __weak WCPayGPMemberFillMoneyCell *currentEditingCell; // @synthesize currentEditingCell=_currentEditingCell;
@property(nonatomic) unsigned long long maxTotalAmount; // @synthesize maxTotalAmount=_maxTotalAmount;
@property(nonatomic) unsigned long long maxPerAmount; // @synthesize maxPerAmount=_maxPerAmount;
@property(nonatomic) unsigned long maxSelectMember; // @synthesize maxSelectMember=_maxSelectMember;
@property(retain, nonatomic) NSMutableDictionary *userPayAmountDict; // @synthesize userPayAmountDict=_userPayAmountDict;
@property(retain, nonatomic) NSArray *outExistContact; // @synthesize outExistContact=_outExistContact;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) NSArray *chatroomMemberList; // @synthesize chatroomMemberList=_chatroomMemberList;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)hidePerAmountInvalidTipsWithContact:(id)arg1;
- (void)handlePerAmountInvalidTipsWithContact:(id)arg1;
- (BOOL)checkIfSelectedMemberLargeThanMax;
- (void)doChatRoomSearch:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (BOOL)isContactSelected:(id)arg1;
- (BOOL)isWhiteCellRow:(id)arg1;
- (id)getContactAtIndexPath:(id)arg1;
- (void)finishSelectMember;
- (void)cancelSaveSelectedMember;
- (void)cancelSelectMember;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)updateContentStatus;
- (id)getTotalAmonutString;
- (void)confirmToCleanUp;
- (void)cancelToCleanup;
- (void)cleanUpBtnPress:(id)arg1;
- (void)setupToolBarContent;
- (void)setupTopbarViewContent;
- (void)cellTextFieldKeyboardPressNextBtn:(id)arg1;
- (void)cellTextFieldKeyboardPressPreviousBtn:(id)arg1;
- (void)cellTextFieldDidEndEdittingWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldDidChangeWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldWillBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (BOOL)cellTextFieldShouldBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (void)makeWhiteCellWithIndexPath:(id)arg1 withCell:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setupContentView;
- (void)setupData;
- (void)layoutSubviews;
- (void)refreshContentViewWithChatroomContact:(id)arg1 selectedContactArray:(id)arg2 userPayAmountDict:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
