//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface WCNewClickPageStatData : MMObject
{
    unsigned long errType;
    unsigned long errCnt;
    NSMutableDictionary *dicPageDatas;
    unsigned long firstEnterTimeStamp;
    unsigned long lastQuitTimeStamp;
}

+ (void)initialize;
@property(nonatomic) unsigned long lastQuitTimeStamp; // @synthesize lastQuitTimeStamp;
@property(nonatomic) unsigned long firstEnterTimeStamp; // @synthesize firstEnterTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *dicPageDatas; // @synthesize dicPageDatas;
@property(nonatomic) unsigned long errCnt; // @synthesize errCnt;
@property(nonatomic) unsigned long errType; // @synthesize errType;
- (void).cxx_destruct;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

