//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseResponseErrMsg, NSMutableArray;

@interface LbsContactInfoList : NSObject
{
    NSMutableArray *m_LbsContactList;
    int m_iRet;
    BaseResponseErrMsg *m_ErrorMsg;
    int m_iState;
    int m_iFlushTime;
    BOOL m_iIsShowRoom;
    int m_iRoomMemberCount;
}

@property(nonatomic) int m_iRoomMemberCount; // @synthesize m_iRoomMemberCount;
@property(nonatomic) BOOL m_iIsShowRoom; // @synthesize m_iIsShowRoom;
@property(nonatomic) int m_iFlushTime; // @synthesize m_iFlushTime;
@property(nonatomic) int m_iState; // @synthesize m_iState;
@property(retain, nonatomic) BaseResponseErrMsg *m_ErrorMsg; // @synthesize m_ErrorMsg;
@property(nonatomic) int iRet; // @synthesize iRet=m_iRet;
@property(retain, nonatomic) NSMutableArray *lbsContactList; // @synthesize lbsContactList=m_LbsContactList;
- (void).cxx_destruct;
- (void)replaceLbsContactListAtIndexes:(id)arg1 withLbsContactList:(id)arg2;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeLbsContactListAtIndexes:(id)arg1;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned int)arg1;
- (void)insertLbsContactList:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inLbsContactListAtIndex:(unsigned int)arg2;
- (id)objectInLbsContactListAtIndex:(unsigned int)arg1;
- (void)getLbsContactList:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned int)countOfLbsContactList;
- (void)removeFromLbsContactList:(id)arg1;
- (void)addToLbsContactList:(id)arg1;
- (id)description;
- (id)keyPaths;
- (id)init;

@end
