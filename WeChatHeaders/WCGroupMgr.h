//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface WCGroupMgr : MMObject <PBMessageObserverDelegate>
{
    BOOL m_bMemCacheNeedReload;
    NSMutableDictionary *m_groups;
    NSMutableDictionary *m_recommends;
    NSMutableDictionary *m_readRecommends;
    id <WCGroupMgrExt> m_delegate;
    NSString *m_fromUsrName;
    NSString *m_initFromPath;
    unsigned long m_lastUpdateAllGroupsTime;
}

@property(nonatomic) unsigned long m_lastUpdateAllGroupsTime; // @synthesize m_lastUpdateAllGroupsTime;
@property(retain, nonatomic) NSString *m_initFromPath; // @synthesize m_initFromPath;
@property(retain, nonatomic) NSString *m_fromUsrName; // @synthesize m_fromUsrName;
@property(nonatomic) __weak id <WCGroupMgrExt> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onSetMemberToGroupsReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onGroupListReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onGroupMemberOpReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onGroupOpReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)doGroupListOp:(unsigned long)arg1 withMD5:(id)arg2;
- (void)doGroupMemberOp:(unsigned long)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4 withScene:(int)arg5;
- (void)doGroupMemberOp:(unsigned long)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4;
- (void)doGroupOp:(unsigned long)arg1 onGroup:(id)arg2 withGroupName:(id)arg3;
- (BOOL)tryFuzzDefaultGroup;
- (id)getGroupsWithMember:(id)arg1;
- (void)setMember:(id)arg1 toGroups:(id)arg2;
- (void)modGroup:(id)arg1 newName:(id)arg2 members:(id)arg3 withScene:(int)arg4;
- (void)modGroup:(id)arg1 newName:(id)arg2 members:(id)arg3;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(int)arg3;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(int)arg3;
- (void)modifyGroupName:(id)arg1 newName:(id)arg2;
- (void)deleteGroup:(id)arg1;
- (void)createGroup:(id)arg1 withGroupName:(id)arg2;
- (void)updateAllRecommends;
- (void)setRecommendReadForGroup:(id)arg1;
- (id)getUnReadRecommendsForGroup:(id)arg1;
- (id)getReadRecommendsForGroup:(id)arg1;
- (void)localDeleteAllGroups;
- (BOOL)canUpdateAllGroups;
- (void)updateAllGroups;
- (id)getGroupByID:(id)arg1;
- (id)getAllGroups;
- (void)dealloc;
- (id)init;
- (void)clearMD5;
- (void)clearMemoryCache;
- (void)saveData;
- (void)tryLoadData;
- (id)pathForReadRecommendData;
- (id)pathForRecommendData;
- (id)pathForGroupData;

@end
