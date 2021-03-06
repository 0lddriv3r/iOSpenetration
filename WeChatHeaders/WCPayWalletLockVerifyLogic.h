//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPaySecurityBaseControlLogic.h"

#import "MMPatternLockLogicDelegate.h"
#import "WCPayTouchLockVerifyLogicDelegate.h"

@class NSString;

@interface WCPayWalletLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, WCPayTouchLockVerifyLogicDelegate>
{
    id <WCPayWalletLockVerifyLogicDelegate> _delegate;
    unsigned long _patternLockLogicTag;
}

@property(nonatomic) unsigned long patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) __weak id <WCPayWalletLockVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)needBlockUntilVerified:(id)arg1;
- (void)touchLockVerifySuccess:(id)arg1;
- (void)onPatternLockErrorOutOfLimit;
- (BOOL)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockLogicNeedDismiss;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (id)getEnteranceViewContoller;
- (BOOL)isInValidDuration;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

