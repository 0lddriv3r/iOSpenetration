//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "WAMultiPickerViewDelegate.h"

@class NSString, WAMultiPickerView;

@interface WAWebViewPlugin_multiPicker : WAWebViewPluginBase <WAMultiPickerViewDelegate>
{
    WAMultiPickerView *_pickerView;
    id <IWAWebViewPluginDelegate> _resultDelegate;
}

@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onSelect:(int)arg1 row:(int)arg2;
- (void)onConfirm:(id)arg1;
- (void)onCancel;
- (void)updateMultiPickerView:(id)arg1 current:(int)arg2 column:(int)arg3;
- (void)showMultiPickerView:(id)arg1 current:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

