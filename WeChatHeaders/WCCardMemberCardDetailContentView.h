//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardDetailContentLogicDelegate.h"
#import "WCCardDetailPageCodeCellViewDelegate.h"
#import "WCCardLargeCodeViewDelegate.h"
#import "WCShareCardMemberCustomImgHeaderDelegate.h"

@class NSString, WCCardLargeCodeView, WCShareCardMemberHeaderCardImageView;

@interface WCCardMemberCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardMemberCustomImgHeaderDelegate, WCCardDetailPageCodeCellViewDelegate, ILinkEventExt, WCCardLargeCodeViewDelegate>
{
    BOOL _bIsShareCardMode;
    BOOL _bIsAcceptMemberCard;
    id <WCCardMemberCardContentDelegate> _delegte;
    WCShareCardMemberHeaderCardImageView *_memberCardImgView;
    WCCardLargeCodeView *_largeCodeView;
}

@property(retain, nonatomic) WCCardLargeCodeView *largeCodeView; // @synthesize largeCodeView=_largeCodeView;
@property(retain, nonatomic) WCShareCardMemberHeaderCardImageView *memberCardImgView; // @synthesize memberCardImgView=_memberCardImgView;
@property(nonatomic) BOOL bIsAcceptMemberCard; // @synthesize bIsAcceptMemberCard=_bIsAcceptMemberCard;
@property(nonatomic) BOOL bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) __weak id <WCCardMemberCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void).cxx_destruct;
- (void)realClosed;
- (void)onPageCodeTapWithCardSource:(struct CGRect)arg1;
- (void)refreshCode;
- (void)onReasonButtonClick;
- (void)onCodeViewFieldClick;
- (void)makeGiftCardInfoCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeOperateCell:(id)arg1;
- (void)makeAcceptCardCell:(id)arg1;
- (float)calcOperationFieldCellHeight;
- (float)calcPayOrderCellHeight;
- (void)makePayOrderCell:(id)arg1;
- (void)makeCodeCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onOperationBtnClick:(id)arg1;
- (void)onGuidanceBtnClick:(id)arg1;
- (void)onFollowBtnClick:(id)arg1;
- (BOOL)isItemFromOutAppScene;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onMemberCardSecondaryField:(id)arg1;
- (void)onMemberCardAnnounceClicked:(id)arg1;
- (void)onMemberCardViewApplyBtnClick;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (float)getTableViewCellSumHeight;
- (float)getCommonCellHeight;
- (void)onNearbyShopPhoneNumClick;
- (void)reloadContentData;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(float)arg1;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(BOOL)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

