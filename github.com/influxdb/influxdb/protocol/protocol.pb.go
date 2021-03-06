// Code generated by protoc-gen-go.
// source: protocol/protocol.proto
// DO NOT EDIT!

package protocol

import proto "code.google.com/p/goprotobuf/proto"
import json "encoding/json"
import math "math"

// Reference proto, json, and math imports to suppress error if they are not otherwise used.
var _ = proto.Marshal
var _ = &json.SyntaxError{}
var _ = math.Inf

type Request_Type int32

const (
	Request_WRITE         Request_Type = 1
	Request_QUERY         Request_Type = 2
	Request_DROP_DATABASE Request_Type = 3
	Request_HEARTBEAT     Request_Type = 7
)

var Request_Type_name = map[int32]string{
	1: "WRITE",
	2: "QUERY",
	3: "DROP_DATABASE",
	7: "HEARTBEAT",
}
var Request_Type_value = map[string]int32{
	"WRITE":         1,
	"QUERY":         2,
	"DROP_DATABASE": 3,
	"HEARTBEAT":     7,
}

func (x Request_Type) Enum() *Request_Type {
	p := new(Request_Type)
	*p = x
	return p
}
func (x Request_Type) String() string {
	return proto.EnumName(Request_Type_name, int32(x))
}
func (x Request_Type) MarshalJSON() ([]byte, error) {
	return json.Marshal(x.String())
}
func (x *Request_Type) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Request_Type_value, data, "Request_Type")
	if err != nil {
		return err
	}
	*x = Request_Type(value)
	return nil
}

type Response_Type int32

const (
	Response_QUERY      Response_Type = 1
	Response_END_STREAM Response_Type = 3
	Response_HEARTBEAT  Response_Type = 9
	Response_ERROR      Response_Type = 11
)

var Response_Type_name = map[int32]string{
	1:  "QUERY",
	3:  "END_STREAM",
	9:  "HEARTBEAT",
	11: "ERROR",
}
var Response_Type_value = map[string]int32{
	"QUERY":      1,
	"END_STREAM": 3,
	"HEARTBEAT":  9,
	"ERROR":      11,
}

func (x Response_Type) Enum() *Response_Type {
	p := new(Response_Type)
	*p = x
	return p
}
func (x Response_Type) String() string {
	return proto.EnumName(Response_Type_name, int32(x))
}
func (x Response_Type) MarshalJSON() ([]byte, error) {
	return json.Marshal(x.String())
}
func (x *Response_Type) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Response_Type_value, data, "Response_Type")
	if err != nil {
		return err
	}
	*x = Response_Type(value)
	return nil
}

type FieldValue struct {
	StringValue      *string  `protobuf:"bytes,1,opt,name=string_value" json:"string_value,omitempty"`
	DoubleValue      *float64 `protobuf:"fixed64,3,opt,name=double_value" json:"double_value,omitempty"`
	BoolValue        *bool    `protobuf:"varint,4,opt,name=bool_value" json:"bool_value,omitempty"`
	Int64Value       *int64   `protobuf:"varint,5,opt,name=int64_value" json:"int64_value,omitempty"`
	IsNull           *bool    `protobuf:"varint,6,opt,name=is_null" json:"is_null,omitempty"`
	XXX_unrecognized []byte   `json:"-"`
}

func (m *FieldValue) Reset()         { *m = FieldValue{} }
func (m *FieldValue) String() string { return proto.CompactTextString(m) }
func (*FieldValue) ProtoMessage()    {}

func (m *FieldValue) GetStringValue() string {
	if m != nil && m.StringValue != nil {
		return *m.StringValue
	}
	return ""
}

func (m *FieldValue) GetDoubleValue() float64 {
	if m != nil && m.DoubleValue != nil {
		return *m.DoubleValue
	}
	return 0
}

func (m *FieldValue) GetBoolValue() bool {
	if m != nil && m.BoolValue != nil {
		return *m.BoolValue
	}
	return false
}

func (m *FieldValue) GetInt64Value() int64 {
	if m != nil && m.Int64Value != nil {
		return *m.Int64Value
	}
	return 0
}

func (m *FieldValue) GetIsNull() bool {
	if m != nil && m.IsNull != nil {
		return *m.IsNull
	}
	return false
}

type Point struct {
	Values           []*FieldValue `protobuf:"bytes,1,rep,name=values" json:"values,omitempty"`
	Timestamp        *int64        `protobuf:"varint,2,opt,name=timestamp" json:"timestamp,omitempty"`
	SequenceNumber   *uint64       `protobuf:"varint,3,opt,name=sequence_number" json:"sequence_number,omitempty"`
	XXX_unrecognized []byte        `json:"-"`
}

func (m *Point) Reset()         { *m = Point{} }
func (m *Point) String() string { return proto.CompactTextString(m) }
func (*Point) ProtoMessage()    {}

func (m *Point) GetValues() []*FieldValue {
	if m != nil {
		return m.Values
	}
	return nil
}

func (m *Point) GetTimestamp() int64 {
	if m != nil && m.Timestamp != nil {
		return *m.Timestamp
	}
	return 0
}

func (m *Point) GetSequenceNumber() uint64 {
	if m != nil && m.SequenceNumber != nil {
		return *m.SequenceNumber
	}
	return 0
}

type Series struct {
	Points           []*Point `protobuf:"bytes,1,rep,name=points" json:"points,omitempty"`
	Name             *string  `protobuf:"bytes,2,req,name=name" json:"name,omitempty"`
	Fields           []string `protobuf:"bytes,3,rep,name=fields" json:"fields,omitempty"`
	FieldIds         []uint64 `protobuf:"varint,4,rep,name=fieldIds" json:"fieldIds,omitempty"`
	ShardId          *uint32  `protobuf:"varint,5,opt,name=shard_id" json:"shard_id,omitempty"`
	XXX_unrecognized []byte   `json:"-"`
}

func (m *Series) Reset()         { *m = Series{} }
func (m *Series) String() string { return proto.CompactTextString(m) }
func (*Series) ProtoMessage()    {}

func (m *Series) GetPoints() []*Point {
	if m != nil {
		return m.Points
	}
	return nil
}

func (m *Series) GetName() string {
	if m != nil && m.Name != nil {
		return *m.Name
	}
	return ""
}

func (m *Series) GetFields() []string {
	if m != nil {
		return m.Fields
	}
	return nil
}

func (m *Series) GetFieldIds() []uint64 {
	if m != nil {
		return m.FieldIds
	}
	return nil
}

func (m *Series) GetShardId() uint32 {
	if m != nil && m.ShardId != nil {
		return *m.ShardId
	}
	return 0
}

type QueryResponseChunk struct {
	Series           *Series `protobuf:"bytes,1,opt,name=series" json:"series,omitempty"`
	Done             *bool   `protobuf:"varint,2,opt,name=done" json:"done,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *QueryResponseChunk) Reset()         { *m = QueryResponseChunk{} }
func (m *QueryResponseChunk) String() string { return proto.CompactTextString(m) }
func (*QueryResponseChunk) ProtoMessage()    {}

func (m *QueryResponseChunk) GetSeries() *Series {
	if m != nil {
		return m.Series
	}
	return nil
}

func (m *QueryResponseChunk) GetDone() bool {
	if m != nil && m.Done != nil {
		return *m.Done
	}
	return false
}

type Request struct {
	Id               *uint32       `protobuf:"varint,1,opt,name=id" json:"id,omitempty"`
	Type             *Request_Type `protobuf:"varint,2,req,name=type,enum=protocol.Request_Type" json:"type,omitempty"`
	Database         *string       `protobuf:"bytes,3,req,name=database" json:"database,omitempty"`
	MultiSeries      []*Series     `protobuf:"bytes,4,rep,name=multi_series" json:"multi_series,omitempty"`
	SequenceNumber   *uint64       `protobuf:"varint,5,opt,name=sequence_number" json:"sequence_number,omitempty"`
	ShardId          *uint32       `protobuf:"varint,6,opt,name=shard_id" json:"shard_id,omitempty"`
	Query            *string       `protobuf:"bytes,7,opt,name=query" json:"query,omitempty"`
	UserName         *string       `protobuf:"bytes,8,opt,name=user_name" json:"user_name,omitempty"`
	RequestNumber    *uint32       `protobuf:"varint,9,opt,name=request_number" json:"request_number,omitempty"`
	IsDbUser         *bool         `protobuf:"varint,10,opt,name=is_db_user" json:"is_db_user,omitempty"`
	XXX_unrecognized []byte        `json:"-"`
}

func (m *Request) Reset()         { *m = Request{} }
func (m *Request) String() string { return proto.CompactTextString(m) }
func (*Request) ProtoMessage()    {}

func (m *Request) GetId() uint32 {
	if m != nil && m.Id != nil {
		return *m.Id
	}
	return 0
}

func (m *Request) GetType() Request_Type {
	if m != nil && m.Type != nil {
		return *m.Type
	}
	return 0
}

func (m *Request) GetDatabase() string {
	if m != nil && m.Database != nil {
		return *m.Database
	}
	return ""
}

func (m *Request) GetMultiSeries() []*Series {
	if m != nil {
		return m.MultiSeries
	}
	return nil
}

func (m *Request) GetSequenceNumber() uint64 {
	if m != nil && m.SequenceNumber != nil {
		return *m.SequenceNumber
	}
	return 0
}

func (m *Request) GetShardId() uint32 {
	if m != nil && m.ShardId != nil {
		return *m.ShardId
	}
	return 0
}

func (m *Request) GetQuery() string {
	if m != nil && m.Query != nil {
		return *m.Query
	}
	return ""
}

func (m *Request) GetUserName() string {
	if m != nil && m.UserName != nil {
		return *m.UserName
	}
	return ""
}

func (m *Request) GetRequestNumber() uint32 {
	if m != nil && m.RequestNumber != nil {
		return *m.RequestNumber
	}
	return 0
}

func (m *Request) GetIsDbUser() bool {
	if m != nil && m.IsDbUser != nil {
		return *m.IsDbUser
	}
	return false
}

type Response struct {
	Type             *Response_Type `protobuf:"varint,1,req,name=type,enum=protocol.Response_Type" json:"type,omitempty"`
	RequestId        *uint32        `protobuf:"varint,2,req,name=request_id" json:"request_id,omitempty"`
	MultiSeries      []*Series      `protobuf:"bytes,3,rep,name=multi_series" json:"multi_series,omitempty"`
	ErrorMessage     *string        `protobuf:"bytes,5,opt,name=error_message" json:"error_message,omitempty"`
	NextPointTime    *int64         `protobuf:"varint,6,opt,name=nextPointTime" json:"nextPointTime,omitempty"`
	Request          *Request       `protobuf:"bytes,7,opt,name=request" json:"request,omitempty"`
	XXX_unrecognized []byte         `json:"-"`
}

func (m *Response) Reset()         { *m = Response{} }
func (m *Response) String() string { return proto.CompactTextString(m) }
func (*Response) ProtoMessage()    {}

func (m *Response) GetType() Response_Type {
	if m != nil && m.Type != nil {
		return *m.Type
	}
	return 0
}

func (m *Response) GetRequestId() uint32 {
	if m != nil && m.RequestId != nil {
		return *m.RequestId
	}
	return 0
}

func (m *Response) GetMultiSeries() []*Series {
	if m != nil {
		return m.MultiSeries
	}
	return nil
}

func (m *Response) GetErrorMessage() string {
	if m != nil && m.ErrorMessage != nil {
		return *m.ErrorMessage
	}
	return ""
}

func (m *Response) GetNextPointTime() int64 {
	if m != nil && m.NextPointTime != nil {
		return *m.NextPointTime
	}
	return 0
}

func (m *Response) GetRequest() *Request {
	if m != nil {
		return m.Request
	}
	return nil
}

func init() {
	proto.RegisterEnum("protocol.Request_Type", Request_Type_name, Request_Type_value)
	proto.RegisterEnum("protocol.Response_Type", Response_Type_name, Response_Type_value)
}
