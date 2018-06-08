//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate.h"

@class NSString;

@interface WCRedEnvelopesHistoryListControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate>
{
    int m_enWCRedEnvelopesHistoryType;
}

- (void)OnChangeToScene:(int)arg1;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnDidSelectOtherYear:(id)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
- (void)requestData;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

