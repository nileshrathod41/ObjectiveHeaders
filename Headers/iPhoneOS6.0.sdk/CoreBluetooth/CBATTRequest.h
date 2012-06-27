/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSNumber, CBCentral, CBCharacteristic;

@interface CBATTRequest : XXUnknownSuperclass {
@private
	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned _offset;
	NSData* _value;
	NSNumber* _transactionID;
	BOOL _ignoreResponse;
}
@property(retain, nonatomic) CBCentral* central;	// @synthesize=_central
@property(retain, nonatomic) CBCharacteristic* characteristic;	// @synthesize=_characteristic
@property(assign, nonatomic) BOOL ignoreResponse;	// @synthesize=_ignoreResponse
@property(assign, nonatomic) unsigned offset;	// @synthesize=_offset
@property(retain, nonatomic) NSNumber* transactionID;	// @synthesize=_transactionID
@property(copy) NSData* value;	// @synthesize=_value
-(id)initWithCentral:(id)central characteristic:(id)characteristic offset:(unsigned)offset value:(id)value transactionID:(id)anId;
// declared property getter: -(id)central;
// declared property getter: -(id)characteristic;
-(void)dealloc;
-(id)description;
// declared property getter: -(BOOL)ignoreResponse;
// declared property getter: -(unsigned)offset;
// declared property setter: -(void)setCentral:(id)central;
// declared property setter: -(void)setCharacteristic:(id)characteristic;
// declared property setter: -(void)setIgnoreResponse:(BOOL)response;
// declared property setter: -(void)setOffset:(unsigned)offset;
// declared property setter: -(void)setTransactionID:(id)anId;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)transactionID;
// declared property getter: -(id)value;
@end

