//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCDeviceFriendWifiMgrExt.h"
#import "PublicWifiLoadingViewDelegate.h"

@class NSString, PublicWifiLoadingView, UIImageView, UILabel, UIScrollView;

@interface WCFriendWifiViewController : MMUIViewController <PublicWifiLoadingViewDelegate, IWCDeviceFriendWifiMgrExt>
{
    NSString *m_ssid;
    UIScrollView *m_scrollView;
    PublicWifiLoadingView *m_loadingView;
    UIImageView *m_wifiLogoView;
    UILabel *m_mainLbl;
    UILabel *m_subLbl;
}

- (void).cxx_destruct;
- (void)onWCDeviceFriendWifiMgrUnable;
- (void)onWCDeviceFriendWifiMgrConnectedRouterFaild;
- (void)onWCDeviceFriendWifiMgrConnectedRouterWithErrCode:(int)arg1;
- (void)onPublicWifiLoadingViewFinishLoading;
- (void)updateConnectUnableStatus;
- (void)updateConnectFailedStatus;
- (void)updateStatusWithErrCode:(int)arg1;
- (void)onDone;
- (void)updateLayout;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSSID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

