//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AppSettingItem : NSObject <NSCoding>
{
    BOOL appAddedByUser;
    NSString *openID;
    unsigned long flag;
    NSString *appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(nonatomic) BOOL appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) unsigned long flag; // @synthesize flag;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
