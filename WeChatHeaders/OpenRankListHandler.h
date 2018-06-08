//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "WCShareAuthViewControllerDelegate.h"

@class MMUINavigationController, NSString, NSURL;

@interface OpenRankListHandler : MMObject <WCShareAuthViewControllerDelegate, IPreEnterWechatLogicExt>
{
    NSString *_appId;
    NSString *_bundleId;
    NSURL *_url;
    MMUINavigationController *_navigationController;
}

@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAuth;
- (void)onPreEnterWechatDone;
- (void)openRankList;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)cancelOpenRankList;
- (void)startAuth;
- (void)startHandleAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

