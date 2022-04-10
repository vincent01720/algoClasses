classdef movingBlip < blip
    %UNTITLED4 Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        deltaAoA
    end
    
    methods
        function obj = movingBlip(deltaAoA, varargin)
            obj = obj@blip(varargin{:});
            if nargin >= 1
                obj.deltaAoA = deltaAoA;
            end
        end
        
        function obj = move(obj)
            obj.AoA = obj.AoA + obj.deltaAoA;
            if abs(obj.AoA) > 65
                obj.deltaAoA = - obj.deltaAoA;
            end
        end
    end
    
end

