//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WAAppBrandUpdateWxaUsageListNotify : NSObject
{
    unsigned long _type;
    unsigned long _deleteCount;
    NSMutableArray *_deleteAppInfos;
}

@property(retain, nonatomic) NSMutableArray *deleteAppInfos; // @synthesize deleteAppInfos=_deleteAppInfos;
@property(nonatomic) unsigned long deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
