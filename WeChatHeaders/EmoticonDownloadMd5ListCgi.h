//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface EmoticonDownloadMd5ListCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce;
    id <EmoticonDownloadMd5ListCgiDelegate> m_delegate;
    NSMutableArray *m_md5List;
    unsigned long m_eventId;
    unsigned long m_endFlag;
    unsigned long m_currentIndex;
}

@property(nonatomic) BOOL m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) unsigned long m_currentIndex; // @synthesize m_currentIndex;
@property(nonatomic) unsigned long m_endFlag; // @synthesize m_endFlag;
@property(nonatomic) unsigned long m_eventId; // @synthesize m_eventId;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
@property(nonatomic) __weak id <EmoticonDownloadMd5ListCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)callOkDelegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)internalRequest;
- (void)startRequest;
- (BOOL)isActive;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

