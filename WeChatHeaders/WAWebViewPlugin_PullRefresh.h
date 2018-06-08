//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "EGORefreshTableHeaderDelegate.h"

@class NSString, WAWebViewPullDownRefreshView;

@interface WAWebViewPlugin_PullRefresh : WAWebViewPluginBase <EGORefreshTableHeaderDelegate>
{
    BOOL _bIsDisablePullDown;
    BOOL _bIsDisablePullUp;
    BOOL _bIsEnablePullRefresh;
    WAWebViewPullDownRefreshView *m_headRefreshView;
    BOOL _isReflashingHead;
    BOOL _isRecoverInsetProcessing;
    float m_fLastY;
    float _offset;
    unsigned long long _triggerTime;
}

@property(readonly, nonatomic) BOOL isRecoverInsetProcessing; // @synthesize isRecoverInsetProcessing=_isRecoverInsetProcessing;
- (void).cxx_destruct;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView:(BOOL)arg1;
- (void)refreshHead;
- (void)processPullDownRefreshWhenEndDragging:(id)arg1;
- (void)processPullDownRefreshWhenBeginDragging;
- (void)pullDownLoadingHeaderRefreshWhenViewWillAppear;
- (void)setDisableWebViewScrollViewPullUp;
- (void)setDisableWebViewScrollViewPullDown;
- (void)realStopAction;
- (void)changePullRefreshMode:(int)arg1;
- (void)stopPullRefresh;
- (void)startPullRefresh;
- (void)disablePullRefresh;
- (void)enablePullRefresh:(float)arg1 mode:(int)arg2;
@property(readonly, nonatomic) BOOL isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
