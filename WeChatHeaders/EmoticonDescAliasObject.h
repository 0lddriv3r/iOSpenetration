//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface EmoticonDescAliasObject : NSObject
{
    NSSet *_descList;
    NSMutableSet *_resultCache;
    int _resultCacheVersion;
}

@property(nonatomic) int resultCacheVersion; // @synthesize resultCacheVersion=_resultCacheVersion;
@property(retain, nonatomic) NSMutableSet *resultCache; // @synthesize resultCache=_resultCache;
@property(retain, nonatomic) NSSet *descList; // @synthesize descList=_descList;
- (void).cxx_destruct;

@end
