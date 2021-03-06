//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface WCOutDataBase : MMObject
{
    WCTDatabase *_dbBase;
    WCTTable *_recentCallTable;
    WCTTable *_weChatOutMsgTable;
}

- (void).cxx_destruct;
- (id)getWeChatOutMsgBeginLocalID:(unsigned long)arg1 limit:(int)arg2;
- (BOOL)insertOrUpdateWcoMsg:(id)arg1;
- (unsigned long)getWeChatOutMsgCount;
- (BOOL)deleteAllRecentCall;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (BOOL)deleteRecentCallById:(int)arg1;
- (BOOL)updateRecentCall:(id)arg1;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (id)arrayForLastCallItem;
- (id)dicFromPhoneNumToLastCallTime;
- (id)dicFromCountryCodeToCount;
- (id)selectRecentCallForPhoneNum:(id)arg1 withCountryCode:(id)arg2 limit:(int)arg3;
- (int)insertCall:(id)arg1;
- (unsigned long)getRecentCallCount;
- (id)init;

@end

