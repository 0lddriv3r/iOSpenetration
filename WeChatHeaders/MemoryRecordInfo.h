//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface MemoryRecordInfo : NSObject <PBCoding>
{
    BOOL isValid;
    NSMutableDictionary *threadInfos;
    double date;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *threadInfos; // @synthesize threadInfos;
@property(nonatomic) BOOL isValid; // @synthesize isValid;
@property(nonatomic) double date; // @synthesize date;
- (void).cxx_destruct;
- (id)eventPathFrom:(id)arg1;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

