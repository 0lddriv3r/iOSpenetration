//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayBeforePayInfo : NSObject
{
    int m_notifyFlag;
    NSString *m_notifyWording;
    NSString *m_leftButtonWording;
    NSString *m_rightButtonWording;
    NSString *m_confirmButtonWording;
}

+ (id)fromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *m_confirmButtonWording; // @synthesize m_confirmButtonWording;
@property(retain, nonatomic) NSString *m_rightButtonWording; // @synthesize m_rightButtonWording;
@property(retain, nonatomic) NSString *m_leftButtonWording; // @synthesize m_leftButtonWording;
@property(retain, nonatomic) NSString *m_notifyWording; // @synthesize m_notifyWording;
@property(nonatomic) int m_notifyFlag; // @synthesize m_notifyFlag;
- (void).cxx_destruct;
- (void)checkValueOrFillWithDefault;

@end

