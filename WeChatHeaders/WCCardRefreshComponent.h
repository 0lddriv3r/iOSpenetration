//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIScrollView;

@interface WCCardRefreshComponent : UIView
{
    struct UIEdgeInsets _scrollViewOriginalInset;
    BOOL _automaticallyChangeAlpha;
    CDUnknownBlockType _refreshingBlock;
    CDUnknownBlockType _endRefreshingCompletionBlock;
    int _state;
    UIScrollView *_scrollView;
    float _pullingPercent;
}

@property(nonatomic, getter=isAutomaticallyChangeAlpha) BOOL automaticallyChangeAlpha; // @synthesize automaticallyChangeAlpha=_automaticallyChangeAlpha;
@property(nonatomic) float pullingPercent; // @synthesize pullingPercent=_pullingPercent;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewOriginalInset; // @synthesize scrollViewOriginalInset=_scrollViewOriginalInset;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType endRefreshingCompletionBlock; // @synthesize endRefreshingCompletionBlock=_endRefreshingCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
- (void).cxx_destruct;
- (void)executeRefreshingCallback;
- (BOOL)isAutoChangeAlpha;
- (BOOL)isRefreshing;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)placeSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end

