//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QDBStatement : NSObject
{
    void *_statement;
    NSString *_query;
    BOOL _inUse;
}

@property BOOL inUse; // @synthesize inUse=_inUse;
@property void *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)reset;
- (void)close;
- (void)dealloc;

@end

