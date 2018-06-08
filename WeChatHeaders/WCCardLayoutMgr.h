//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class WCCardLayoutStorage;

@interface WCCardLayoutMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardLayoutStorage *_layoutStg;
    unsigned long _waitLocationTime;
    id <WCCardLayoutMgrDelegate> _delegate;
    BOOL _bGettingLayout;
}

- (void).cxx_destruct;
- (BOOL)IsLayoutListChanged:(id)arg1 LocalList:(id)arg2;
- (BOOL)IsNeedNotifyChangedExipringList:(id)arg1 MemberCardList:(id)arg2 NearbyList:(id)arg3 RecentList:(id)arg4 LabelList:(id)arg5 FirstList:(id)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)saveLayoutStg;
- (id)GetPathOfWCCardLayoutStorage;
- (void)getCardLayoutByCGI:(id)arg1 Scene:(unsigned int)arg2;
- (id)getEntrySubTitle;
- (BOOL)isGettingLayout;
- (id)layoutTip;
- (BOOL)hasLayoutRedDot;
- (void)clearLayoutRedDot;
- (unsigned long)getTopScene;
- (id)getFirstList;
- (id)getLabelList;
- (id)getRecentList;
- (id)getNearByList;
- (id)getMemberCardList;
- (id)getExpiringList;
- (id)getLayoutBuff;
- (void)loadLayoutStg;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
