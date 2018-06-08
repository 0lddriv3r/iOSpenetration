//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "WAAppDetailInfoManagerExtension.h"

@class CContact, MMTableViewInfo, NSArray, NSString, UIView;

@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate>
{
    NSString *m_appid;
    NSArray *m_authorationList;
    BOOL m_isAuthInfoChanged;
    UIView *m_fakeNavBar;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    CContact *_contact;
    id <WAAppAuthorizationDelegate> _delegate;
}

@property(nonatomic) __weak id <WAAppAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)onGetAppAuthInfoList:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 tipTag:(int)arg3;
- (void)onAuthInfoChangeed:(id)arg1;
- (void)requestAuthorazitionInfo;
- (void)initEmptyView;
- (id)makeHeaderView;
- (void)reloadTableViewInfo;
- (void)initTableViewInfo;
- (void)onReturn;
- (void)initFakeNavBar;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
