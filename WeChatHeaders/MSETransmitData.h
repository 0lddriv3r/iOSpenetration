//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MSETransmitData : NSObject <PBCoding>
{
    NSString *searchText;
    int shareType;
}

+ (void)initialize;
@property(nonatomic) int shareType; // @synthesize shareType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

