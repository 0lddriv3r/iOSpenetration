//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayBindNewCardSwitch : NSObject <PBCoding>
{
    int forbid_bind_card;
    NSString *forbid_word;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *forbid_word; // @synthesize forbid_word;
@property(nonatomic) int forbid_bind_card; // @synthesize forbid_bind_card;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

