//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface MsgNewImgDataLogic : MMObject
{
    NSString *m_nsChatName;
    unsigned long m_uiLeastLoadCount;
    unsigned long m_firstMsgCreateTime;
    unsigned long m_lastMsgCreateTime;
    unsigned long m_cursorPreCreateTime;
    unsigned long m_cursourNextCreateTime;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_searchText;
    NSMutableArray *m_searchMsgArr;
    BOOL m_preEnd;
    BOOL m_nextEnd;
    BOOL _m_bLoading;
    BOOL _m_bNeedFullMessage;
    BOOL _m_bDestroy;
    NSString *_m_enterpriseBrandUserName;
    id <MsgNewImgDataLogicDelegate> _m_delegate;
}

@property(nonatomic) BOOL m_bDestroy; // @synthesize m_bDestroy=_m_bDestroy;
@property(nonatomic) BOOL m_bNeedFullMessage; // @synthesize m_bNeedFullMessage=_m_bNeedFullMessage;
@property(nonatomic) __weak id <MsgNewImgDataLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_bLoading; // @synthesize m_bLoading=_m_bLoading;
@property(retain, nonatomic) NSString *m_enterpriseBrandUserName; // @synthesize m_enterpriseBrandUserName=_m_enterpriseBrandUserName;
@property(nonatomic) BOOL m_nextEnd; // @synthesize m_nextEnd;
@property(nonatomic) BOOL m_preEnd; // @synthesize m_preEnd;
- (void).cxx_destruct;
- (id)getNextCurMsg:(id)arg1;
- (unsigned long)getIndexForSimpleMsg:(id)arg1;
- (void)removeMsgByLocalID:(unsigned long)arg1;
- (id)getSimpleMsgArray;
- (void)loadPre:(BOOL)arg1 loadNext:(BOOL)arg2;
- (id)asyncLoadImg:(BOOL)arg1;
- (unsigned long)getFirstDateOfASection:(unsigned long)arg1 interval:(double *)arg2;
- (BOOL)isMsgMatch:(id)arg1;
- (id)getMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (void)updateMsgArray;
- (void)resetWithCurrentMsg:(id)arg1;
- (BOOL)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (void)doSearch:(id)arg1;
- (id)getSearchText;
- (id)initWithPreLoadCount:(unsigned long)arg1 ChatName:(id)arg2;

@end
