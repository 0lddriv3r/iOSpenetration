//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAAppTaskJumpWeAppOperation : NSObject
{
    unsigned int _type;
    NSString *_fromAppId;
    NSString *_toAppId;
    unsigned int _jumpScene;
}

@property(nonatomic) unsigned int jumpScene; // @synthesize jumpScene=_jumpScene;
@property(retain, nonatomic) NSString *toAppId; // @synthesize toAppId=_toAppId;
@property(retain, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

