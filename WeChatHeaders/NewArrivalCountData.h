//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface NewArrivalCountData : NSObject <NSCoding>
{
    NSString *m_nsFile;
    NSMutableDictionary *m_dicHistory;
}

+ (id)dataFromFile:(id)arg1;
- (void).cxx_destruct;
- (BOOL)removeItem:(id)arg1;
- (BOOL)updateItem:(id)arg1 arrivalCount:(unsigned long)arg2 msgid:(unsigned long)arg3;
- (BOOL)setItem:(id)arg1;
- (id)getItem:(id)arg1;
- (id)getArrayItem;
- (BOOL)save;
- (void)afterLoadData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

