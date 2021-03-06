//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPickerView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString;

@interface QQPickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    _Bool _isCircled;
    NSArray *_DataSourceList;
    CDUnknownBlockType _selectedBlock;
}

@property(nonatomic) _Bool isCircled; // @synthesize isCircled=_isCircled;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) NSArray *DataSourceList; // @synthesize DataSourceList=_DataSourceList;
- (void).cxx_destruct;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 DataList:(id)arg2 block:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

