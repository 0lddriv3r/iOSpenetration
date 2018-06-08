//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FoldableTipViewDelegate.h"
#import "IMMQRCodeExt.h"
#import "WCActionSheetDelegate.h"

@class CContact, FoldableTipView, MMAnimationTipView, NSString, QRCodeCardView;

@interface QRCodeViewController : MMUIViewController <FoldableTipViewDelegate, IMMQRCodeExt, WCActionSheetDelegate>
{
    struct stWeixinEntryRow *m_aryEntryRow;
    unsigned long m_arrEntryRowSize;
    unsigned long m_curOperateType;
    CContact *m_contact;
    MMAnimationTipView *m_tipView;
    QRCodeCardView *m_qrcodeCard;
    BOOL m_bIsNotAllowAddMeByQRCode;
    BOOL _isOpenedByScanQR;
    FoldableTipView *m_abandonTipView;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)preViewControllerIsKindOf:(Class)arg1;
- (void)Operate:(id)arg1;
- (void)scanQRCode;
- (void)shareQRCode:(id)arg1;
- (void)shareChatRoomQRCode;
- (void)initRow;
- (void)onFoldableTipViewClickConfirm:(id)arg1;
- (void)onFoldableTipViewClickCancel:(id)arg1;
- (void)onRevokeQRCode;
- (void)revokeQRCode;
- (void)saveToAlbum;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)getNextQRCode;
- (void)willAppear;
- (void)adjustSubviewRects;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
